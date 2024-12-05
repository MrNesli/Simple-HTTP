#include <stdio.h>

/* https://www.dataprovider.com/blog/tech/internet-basics-series-3-http-requests-explained/
 *
 * Client - program that established the connection for the purpose of sending requests.
 * User agent - Client that initiates a request.
 * Server - program that accepts connections in order to service requests by sending back responses.
 *
 * ------------ Anatomy of HTTP request -----------------
 *
 * GET /test HTTP/1.1                       ]  Request Line
 *
 * Host: www.dataprovider.com               ]
 * Accept: text/html                        ]
 * Accept-Language: en-us                   ]
 * Accept-Encoding: gzip, deflate           ]  Request header 
 * User-Agent: Mozilla/5.0                  ]
 * Content-Type: text/plain; charset=utf8   ]
 * Content-Length: 12                       ]
 *
 * Hello World                              ]  Request body
 *
 *
 * Request line - The method, the target, and the protocol version
 *
 *
 *
 * ----------- Anatomy of HTTP response ----------------------
 *
 *  HTTP/1.1 200 OK                         ]  Status line
 *
 *  Date: Thu, 1 Jan 1970 00:00:00 GMT      ]
 *  Server: Apache                          ]
 *  Content-Type: text/html; charset=utf8   ]  Response header
 *  Content-Length: 51                      ]
 *  Connection: Closed                      ]
 *
 *  <html>                                  ]
 *    <body>                                ]
 *      <h1> Hello World </h1>              ]  Response body
 *    </body>                               ]
 *  </html>                                 ]
 *
 *
 *  Sources: 
 *
 *  https://http.dev/0.9
 *  https://www.dataprovider.com/blog/tech/internet-basics-series-3-http-requests-explained/
 *
 *
 * */




// #include <stdlib.h>

void send_request() {
  char headers[][] = {
    "Content-Type: application/json",
    "Hello world",
    "Testing"
  };

  for (int i = 0; i < strlen(headers); i++) {
    printf("Line: %s\n", headers[i]);
  }
}

int main() {
  printf("Hello world\n");
  send_request();
  return 0;
}
