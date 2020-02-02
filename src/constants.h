#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace http {
    // A list of HTTP headers information can be found at: https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers
    namespace headers {
        namespace authentication {
            constexpr auto www_authenticate = "www-authenticate"; //Defines the authentication method that should be used to access a resource.
            constexpr auto authorization = "authorization"; // Contains the credentials to authenticate a user-agent with a server.
            constexpr auto proxy_authenticate = "proxy-authenticate"; // Defines the authentication method that should be used to access a resource behind a proxy server
            constexpr auto proxy_authorization = "proxy-authorization"; // Contains the credentials to authenticate a user agent with a proxy server.
        }
        namespace caching {
            constexpr auto age = "age"; // The time, in seconds, that the object has been in a proxy cache.
            constexpr auto cache_control = "cache-control"; // Directives for caching mechanisms in both requests and responses.
            constexpr auto clear_site_data = "clear-site-data"; // Clears browsing data (e.g. cookies, storage, cache) associated with the requesting website.
            constexpr auto expires = "expires"; // The date/time after which the response is considered stale.
            constexpr auto pragma = "pragma"; // Implementation-specific header that may have various effects anywhere along the request-response chain. Used for backwards compatibility with HTTP/1.0 caches where the Cache-Control header is not yet present.
            constexpr auto warning = "warning"; // General warning information about possible problems.
        }

        namespace conditionals {
            constexpr auto last_modified = "last-modified"; // The last modification date of the resource, used to compare several versions of the same resource. It is less accurate than ETag, but easier to calculate in some environments. Conditional requests using If-Modified-Since and If-Unmodified-Since use this value to change the behavior of the request.
            constexpr auto etag = "etag"; // A unique string identifying the version of the resource. Conditional requests using If-Match and If-None-Match use this value to change the behavior of the request.
            constexpr auto if_match = "if-match"; // Makes the request conditional, and applies the method only if the stored resource matches one of the given ETags.
            constexpr auto if_none_match = "if-none-match"; // Makes the request conditional, and applies the method only if the stored resource doesn't match any of the given ETags. This is used to update caches (for safe requests), or to prevent to upload a new resource when one already exists.
            constexpr auto if_modified_since = "if-modified-since"; // Makes the request conditional, and expects the entity to be transmitted only if it has been modified after the given date. This is used to transmit data only when the cache is out of date.
            constexpr auto if_unmodified_since = "if-unmodified-since"; // Makes the request conditional, and expects the entity to be transmitted only if it has not been modified after the given date. This ensures the coherence of a new fragment of a specific range with previous ones, or to implement an optimistic concurrency control system when modifying existing documents.
            constexpr auto vary = "vary"; // Determines how to match request headers to decide whether a cached response can be used rather than requesting a fresh one from the origin server.
        }

        namespace connection_management {
            constexpr auto connection = "connection"; // Controls whether the network connection stays open after the current transaction finishes.
            constexpr auto keep_alive = "keep-alive"; // Controls how long a persistent connection should stay open.
        }

        namespace content_negotiation {
            constexpr auto accept = "accept"; // Informs the server about the types of data that can be sent back.
            constexpr auto accept_charset = "accept-charset"; // Which character encodings the client understands.
            constexpr auto accept_encoding = "accept-encoding"; // The encoding algorithm, usually a compression algorithm, that can be used on the resource sent back.
            constexpr auto accept_language = "accept-language"; // Informs the server about the human language the server is expected to send back. This is a hint and is not necessarily under the full control of the user: the server should always pay attention not to override an explicit user choice (like selecting a language from a dropdown).
        }

        namespace controls {
            constexpr auto expect = "expect"; // Indicates expectations that need to be fulfilled by the server to properly handle the request.
        }

        namespace cookies {
            constexpr auto cookie = "cookie"; // Contains stored HTTP cookies previously sent by the server with the Set-Cookie header.
            constexpr auto set_cookie = "set-cookie"; // Send cookies from the server to the user-agent.
        }

        namespace cors {
            constexpr auto access_control_allow_origin = "access-control-allow-origin"; // Indicates whether the response can be shared.
            constexpr auto access_control_allow_credentials = "access-control-allow-credentials"; // Indicates whether the response to the request can be exposed when the credentials flag is true.
            constexpr auto access_control_allow_headers = "access-control-allow-headers"; // Used in response to a preflight request to indicate which HTTP headers can be used when making the actual request.
            constexpr auto access_control_allow_methods = "access-control-allow-methods"; // Specifies the methods allowed when accessing the resource in response to a preflight request.
            constexpr auto access_control_expose_headers = "access-control-expose-headers"; // Indicates which headers can be exposed as part of the response by listing their names.
            constexpr auto access_control_max_age = "access-control-max-age"; // Indicates how long the results of a preflight request can be cached.
            constexpr auto access_control_fequest_headers = "access-control-fequest-headers"; // Used when issuing a preflight request to let the server know which HTTP headers will be used when the actual request is made.
            constexpr auto access_control_request_method = "access-control-request-method"; // Used when issuing a preflight request to let the server know which HTTP method will be used when the actual request is made.
            constexpr auto origin = "origin"; // Indicates where a fetch originates from.
            constexpr auto timing_allow_origin = "timing-allow-origin"; // Specifies origins that are allowed to see values of attributes retrieved via features of the Resource Timing API, which would otherwise be reported as zero due to cross-origin restrictions.
        }

        namespace body_information {
            constexpr auto content_length   = "content-length"; // The size of the resource, in decimal number of bytes.
            constexpr auto content_type     = "content-type"; // Indicates the media type of the resource.
            constexpr auto content_encoding = "content-encoding"; // Used to specify the compression algorithm.
            constexpr auto content_language = "content-language"; // Describes the human language(s) intended for the audience, so that it allows a user to differentiate according to the users' own preferred language.
            constexpr auto content_location = "content-location"; // Indicates an alternate location for the returned data.
        }

        namespace do_not_track {
            constexpr auto dnt = "dnt"; // Expresses the user's tracking preference.
            constexpr auto tk = "tk"; // Indicates the tracking status of the corresponding response.
        }


        namespace downloads {
            constexpr auto content_disposition = "content-disposition"; // Indicates if the resource transmitted should be displayed inline (default behavior without the header), or if it should be handled like a download and the browser should present a “Save As” dialog.
        }

        namespace message_body_information {
            constexpr auto content_length = "Content-Length";// The size of the resource, in decimal number of bytes.
            constexpr auto content_type = "Content-Type";// Indicates the media type of the resource.
            constexpr auto content_encoding = "Content-Encoding";// Used to specify the compression algorithm.
            constexpr auto content_language = "Content-Language";// Describes the human language(s) intended for the audience, so that it allows a user to differentiate according to the users' own preferred language.
            constexpr auto content_location = "Content-Location";// Indicates an alternate location for the returned data.
        }

        namespace proxies {
            constexpr auto forwarded = "Forwarded" // Contains information from the client-facing side of proxy servers that is altered or lost when a proxy is involved in the path of the request.
            constexpr auto x_forwarded_for = "x-forwarded-for"; // Identifies the originating IP addresses of a client connecting to a web server through an HTTP proxy or a load balancer.
            constexpr auto x_forwarded_host = "x-forwarded-host"; // Identifies the original host requested that a client used to connect to your proxy or load balancer.
            constexpr auto x_forwarded_proto = "x-forwarded-proto"; // Identifies the protocol (HTTP or HTTPS) that a client used to connect to your proxy or load balancer.
            constexpr auto via = "via"; // Added by proxies, both forward and reverse proxies, and can appear in the request headers and the response headers.
        }

        namespace redirects {
            constexpr auto location = "location"; //Indicates the URL to redirect a page to.
        }

        namespace request_context {
            constexpr auto from = "from"; // Contains an Internet email address for a human user who controls the requesting user agent.
            constexpr auto host = "host"; // Specifies the domain name of the server (for virtual hosting), and (optionally) the TCP port number on which the server is listening.
            constexpr auto referer = "referer"; // The address of the previous web page from which a link to the currently requested page was followed.
            constexpr auto referrer_policy = "referrer-policy"; // Governs which referrer information sent in the Referer header should be included with requests made.
            constexpr auto user_agent = "user-agent"; // Contains a characteristic string that allows the network protocol peers to identify the application type, operating system, software vendor or software version of the requesting software user agent. See also the Firefox user agent string reference.
        }

        namespace response_contex {
            constexpr auto allow = "allow"; // Lists the set of HTTP request methods support by a resource.
            constexpr auto server = "server"; // Contains information about the software used by the origin server to handle the request.
        }

        namespace range_requests {
            constexpr auto accept_ranges = "accept-ranges"; // Indicates if the server supports range requests, and if so in which unit the range can be expressed.
            constexpr auto range = "range"; // Indicates the part of a document that the server should return.
            constexpr auto if_range = "if-range"; // Creates a conditional range request that is only fulfilled if the given etag or date matches the remote resource. Used to prevent downloading two ranges from incompatible version of the resource.
            constexpr auto content_range = "content-range"; // Indicates where in a full body message a partial message belongs.
        }

        namespace security {
            constexpr auto cross_origin_embedder_policy = "cross-origin-embedder-policy"; // Allows a server to declare an embedder policy for a given document.
            constexpr auto cross_origin_opener_policy = "cross-origin-opener-policy"; // Prevents other domains from opening/controlling a window.
            constexpr auto cross_origiin_resource_policy = "cross-origin-resource-policy"; // Prevents other domains from reading the response of the resources to which this header is applied.
            constexpr auto content_security_policy = "content-security-policy"; // Controls resources the user agent is allowed to load for a given page.
            constexpr auto content_security_policy_report_only = "content-security-policy-report-only"; // Allows web developers to experiment with policies by monitoring, but not enforcing, their effects. These violation reports consist of JSON documents sent via an HTTP POST request to the specified URI.
            constexpr auto expect_ct = "expect-ct"; // Allows sites to opt in to reporting and/or enforcement of Certificate Transparency requirements, which prevents the use of misissued certificates for that site from going unnoticed. When a site enables the Expect-CT header, they are requesting that Chrome check that any certificate for that site appears in public CT logs.
            constexpr auto feature_policy = "feature-policy"; // Provides a mechanism to allow and deny the use of browser features in its own frame, and in iframes that it embeds.
            constexpr auto strict_transport_security = "strict-transport-security"; // Force communication using HTTPS instead of HTTP.
            constexpr auto upgrade_insecure_requests = "upgrade-insecure-requests"; // Sends a signal to the server expressing the client’s preference for an encrypted and authenticated response, and that it can successfully handle the upgrade-insecure-requests directive.
            constexpr auto x_content_type_options = "x-content-type-options"; // Disables MIME sniffing and forces browser to use the type given in Content-Type.
            constexpr auto x_download_options = "x-download-options"; // The X-Download-Options HTTP header indicates that the browser (Internet Explorer) should not display the option to "Open" a file that has been downloaded from an application, to prevent phishing attacks as the file otherwise would gain access to execute in the context of the application. (Note: related MS Edge bug).
            constexpr auto x_frame_options = "x-frame-options"; //Indicates whether a browser should be allowed to render a page in a <frame>, <iframe>, <embed> or <object>.
            constexpr auto x_permitted_cross_domain_policies = "x-permitted-cross-domain-policies"; // Specifies if a cross-domain policy file (crossdomain.xml) is allowed. The file may define a policy to grant clients, such as Adobe's Flash Player, Adobe Acrobat, Microsoft Silverlight, or Apache Flex, permission to handle data across domains that would otherwise be restricted due to the Same-Origin Policy. See the Cross-domain Policy File Specification for more information.
            constexpr auto x_powered_by= "x-powered-by"; // May be set by hosting environments or other frameworks and contains information about them while not providing any usefulness to the application or its visitors. Unset this header to avoid exposing potential vulnerabilities.
            constexpr auto x_xss_protection= "x-xss-protection"; // Enables cross-site scripting filtering.
        }

        namespace server_sent_events {
            constexpr auto last_event_id = "Last-Event-ID";
            constexpr auto nel= "nel"; // Defines a mechanism that enables developers to declare a network error reporting policy.
            constexpr auto ping_from = "ping-from";
            constexpr auto ping_to = "ping-to";
            constexpr auto report_to = "report-to";// Used to specify a server endpoint for the browser to send warning and error reports to.
        }

        namespace transfer_coding {
            constexpr auto transfer_encoding = "transfer-encoding"; // Specifies the form of encoding used to safely transfer the entity to the user.
            constexpr auto te = "te"; // Specifies the transfer encodings the user agent is willing to accept.
            constexpr auto trailer = "trailer"; // Allows the sender to include additional fields at the end of chunked message.

        }

        namespace websockets {
            constexpr auto sec_websocket_key = "sec-websocket-key";
            constexpr auto sec_websocket_extensions = "sec-websocket-extensions";
            constexpr auto sec_websocket_accept = "sec-websocket-accept";
            constexpr auto sec_websocket_protocol = "sec-websocket-protocol";
            constexpr auto sec_websocket_version = "sec-websocket-version";
        }

        namespace other {
            constexpr auto accept_push_policy = "accept-push-policy"; // A client can express the desired push policy for a request by sending an Accept-Push-Policy header field in the request.
            constexpr auto accept_signature = "accept-signature"; // A client can send the Accept-Signature header field to indicate intention to take advantage of any available signatures and to indicate what kinds of signatures it supports.
            constexpr auto alt_svc = "alt-svc"; // Used to list alternate ways to reach this service.
            constexpr auto date = "date"; // Contains the date and time at which the message was originated.
            constexpr auto large_allocation = "large-allocation"; // Tells the browser that the page being loaded is going to want to perform a large allocation.
            constexpr auto link "link"; // The Link entity-header field provides a means for serialising one or more links in HTTP headers. It is semantically equivalent to the HTML <link> element.
            constexpr auto push_policy "push-policy"; // A Push-Policy defines the server behaviour regarding push when processing a request.
            constexpr auto retry_after = "retry-after"; // Indicates how long the user agent should wait before making a follow-up request.
            constexpr auto signature = "signature"; // The Signature header field conveys a list of signatures for an exchange, each one accompanied by information about how to determine the authority of and refresh that signature.
            constexpr auto signed_headers = "signed-headers"; // The Signed-Headers header field identifies an ordered list of response header fields to include in a signature.
            constexpr auto server_timing = "server-timing"; // Communicates one or more metrics and descriptions for the given request-response cycle.
            constexpr auto service_worker_allowed = "service-worker-allowed"; // Used to remove the path restriction by including this header in the response of the Service Worker script.
            constexpr auto sourcemap = "sourcemap"; // Links generated code to a source map.
            constexpr auto upgrade = "upgrade"; // The relevant RFC document for the Upgrade header field is RFC 7230, section 6.7. The standard establishes rules for upgrading or changing to a different protocol on the current client, server, transport protocol connection. For example, this header standard allows a client to change from HTTP 1.1 to HTTP 2.0, assuming the server decides to acknowledge and implement the Upgrade header field. Neither party is required to accept the terms specified in the Upgrade header field. It can be used in both client and server headers. If the Upgrade header field is specified, then the sender MUST also send the Connection header field with the upgrade option specified. For details on the Connection header field please see section 6.1 of the aforementioned RFC.
            constexpr auto x_dns_prefetch_control = "x-dns-prefetch-control"; // Controls DNS prefetching, a feature by which browsers proactively perform domain name resolution on both links that the user may choose to follow as well as URLs for items referenced by the document, including images, CSS, JavaScript, and so forth.
            constexpr auto x_pingback = "x-pingback"; 
            constexpr auto x_requested_with = "x-requested-with";
            constexpr auto x_robots_tag = "x-robots-tag"; // The X-Robots-Tag HTTP header is used to indicate how a web page is to be indexed within public search engine results. The header is effectively equivalent to <meta name="robots" content="...">.
        }
    }
}

#endif // define CONSTANTS_H
