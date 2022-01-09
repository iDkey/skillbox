#include <iostream>
#include <cpr/cpr.h>


int main() {
    cpr::Response r;
    r = cpr::Get(cpr::Url("http://httpbin.org/html"),
                 cpr::Header({{"accept", "text/html"}}));


    std::cout << r.text.substr(r.text.find("<h1>") + 4, r.text.find("</h1>")
                                                        - r.text.find("<h1>")) << '\n';
}
