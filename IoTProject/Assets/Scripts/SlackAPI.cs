using System;
using System.Collections;
using UnityEngine;

namespace SlackApi
{
    [Serializable]
    public class PostMessageData
    {
        public readonly string token = "xoxp-393707153092-400803947735-441076117040-c02efd513f9cc16c5030b7857401c212";
        public readonly string channel = "microbotpush";
        public readonly string icon_url = "enter your own icon url";
        public string text = "unityからSlackに連携したよ！";
        public string parse = string.Empty;
        public string link_names = string.Empty;
        public string username = "ゆにてぃちゃん！";
        public string icon_emoji = string.Empty;
    }

    [Serializable]
    public class UploadData
    {
        public readonly string token = "xoxp-393707153092-400803947735-441076117040-c02efd513f9cc16c5030b7857401c212";
        public readonly string channel = "microbotpush";
        public string filename = DateTime.Now.ToString();
        public string text = "unityからSlackに連携したよ！";
        public string title = "画像を上げるよ！" + DateTime.Now.ToString("yyyyMMddHHmmss");
        public string initial_comment = string.Empty;
        public readonly string username = "ゆにてぃちゃん！";
        public string icon_url = "enter your own icon url";
    }

    public static class SlackAPI
    {
        public static IEnumerator PostMessage(
            PostMessageData data,
            Action onSuccess = null,
            Action<string> onError = null
        )
        {
            var form = new WWWForm();
            form.AddField("text", data.text);
            form.AddField("parse", data.parse);
            form.AddField("link_names", data.link_names);
            form.AddField("username", data.username);
            form.AddField("icon_emoji", data.icon_emoji);

            form.AddField("token", data.token);
            form.AddField("channel", data.channel);
            form.AddField("icon_url", data.icon_url);
            var url = "https://slack.com/api/chat.postMessage";
            var www = new WWW(url, form);
            yield return www;
            var error = www.error;

            if (!string.IsNullOrEmpty(error))
            {
                if (onError != null)
                {
                    onError.Invoke(error);
                }

                yield break;
            }

            if (onSuccess != null)
                onSuccess.Invoke();
        }

        public static IEnumerator UploadScreenShot(
            UploadData data,
            int? x = null,
            int? y = null,
            Action onSuccess = null,
            Action<string> onError = null

        )
        {
            yield return new WaitForEndOfFrame();
            if (x == null) x = 0;
            if (y == null) y = 0;

            var width = Screen.width;
            var height = Screen.height;
            var texture = new Texture2D(width, height, TextureFormat.ARGB32, false);
            var source = new Rect(x.Value, y.Value, width, height);

            texture.ReadPixels(source, 0, 0);
            texture.Apply();

            var form = new WWWForm();
            var contents = texture.EncodeToPNG();

            form.AddField("text", data.text);
            form.AddField("title", data.title);
            form.AddField("initial_comment", data.initial_comment);
            form.AddField("username", data.username);
            form.AddField("icon_url", data.icon_url);

            form.AddField("token", data.token);
            form.AddField("channel", data.channel);
            form.AddBinaryData("file", contents, data.filename, "image/png");

            var url = "https://slack.com/api/files.upload";
            var www = new WWW(url, form);
            yield return www;
            var error = www.error;

            if (!string.IsNullOrEmpty(error))
            {
                if (onError != null)
                {
                    onError.Invoke(error);
                }
                yield break;
            }
            else
            {
                Debug.Log("Success!!!");
                onSuccess();
            }
        }
    }
}