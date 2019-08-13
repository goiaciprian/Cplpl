/*curl.cpp Learning curl
*/

#include <iostream>
#include <string>
#include <

size_t WriteCallback(char *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main(int argc, char * argv[])
{
    curl_global_init(CURL_GLOBAL_ALL);

    CURL* easyhandle = curl_easy_init();
    std::string readBuffer;

    curl_easy_setopt(easyhandle, CURLOPT_URL, "http://www.bbc.co.uk/news");
    curl_easy_setopt(easyhandle, CURLOPT_VERBOSE, 1L);
    curl_easy_setopt(easyhandle, CURLOPT_PROXY, "http://my.proxy.net");   // replace with your actual proxy
    curl_easy_setopt(easyhandle, CURLOPT_PROXYPORT, 8080L);
    curl_easy_setopt(easyhandle, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(easyhandle, CURLOPT_WRITEDATA, &readBuffer);

    curl_easy_perform(easyhandle);

    std::cout << readBuffer << std::endl;

    return 0;
}