#include <netinet/in.h>

struct xl2tpd_ip_addr {
    sa_family_t family;
    union {
        struct in_addr v4;
        struct in6_addr v6;
    } addr;
};

int init_network_ipv6(void);
int bind_ipv6_socket(int sock, struct xl2tpd_ip_addr *addr, int port);
int connect_ipv6_peer(int sock, struct xl2tpd_ip_addr *addr, int port);
int resolve_hostname(const char *hostname, struct xl2tpd_ip_addr *addr);
