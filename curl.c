/*#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res;

  curl = curl_easy_init();
  if(curl) {
    curl_easy_setopt(curl, CURLOPT_URL, "https://ges-cas.kordis.fr/login");
    res = curl_easy_perform(curl);
    // Check for errors 
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
              curl_easy_strerror(res));

    // always cleanup 
    curl_easy_cleanup(curl);
  }
  return 0;
}
*/
#include <stdio.h>
#include <curl/curl.h>

int curl(void)
{
  CURL *curl;
  CURLcode res;
  struct curl_slist *headers = NULL;
  char *username = "your_username";
  char *password = "your_password";
  char postfields[256];

  snprintf(postfields, 256, "username=%s&password=%s", username, password);

  curl = curl_easy_init();
  if(curl) {
    headers = curl_slist_append(headers, "Content-Type: application/x-www-form-urlencoded");
    curl_easy_setopt(curl, CURLOPT_URL, "https://ges-cas.kordis.fr/login");
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postfields);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(curl, CURLOPT_POST, 1L);
    res = curl_easy_perform(curl);
    /* Check for errors */
    if(res != CURLE_OK)
      fprintf(stderr, "curl_easy_perform() failed: %s\n",
      curl_easy_strerror(res));

    /* Check for redirection */
    char *redirect_url = "https://myges.fr";
    long response_code;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
    if(response_code == 302) {
        curl_easy_getinfo(curl, CURLINFO_REDIRECT_URL, &redirect_url);
        curl_easy_setopt(curl, CURLOPT_URL, redirect_url);
        res = curl_easy_perform(curl);
    }
    res = curl_easy_perform(curl);
  }
    return 0;
}
    




