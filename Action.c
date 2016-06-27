Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_set_user("{pserialnumbers}", 
		lr_decrypt("57636e7ce"), 
		"redirect1.sndbx.junipercloud.net:443");

	web_custom_request("device=test", 
		"URL=https://redirect1.sndbx.junipercloud.net/restconf/data/juniper-zerotouch-bootstrap-server:devices/device={pserialnumbers}", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/yang.data+xml", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	return 0;
}