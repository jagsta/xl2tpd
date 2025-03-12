struct host_settings {
    char *hostname;
    int prefer_ipv6; // Prefer IPv6 when both are available
    int force_ipv6;  // Force IPv6 only
    struct xl2tpd_ip_addr bind_addr;
};
