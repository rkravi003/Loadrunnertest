Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.1");

	web_set_user("TEST-000000000000001", 
		lr_decrypt("57636e7ce"), 
		"redirect1.sndbx.junipercloud.net:443");

	web_custom_request("gethash", 
		"URL=https://safebrowsing.google.com/safebrowsing/gethash?client=googlechrome&appver=51.0.2704.84&pver=3.0&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&ext=0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"EncType=text/plain", 
		"Body=4:8\naabcpaij", 
		LAST);

	web_custom_request("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=en&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_custom_request("seed", 
		"URL=https://clients4.google.com/chrome-variations/seed?osname=win", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	/* Request with GET method to URL "https://redirect1.sndbx.junipercloud.net/restconf/data/juniper-zerotouch-bootstrap-server:devices/device=TEST-000000000000001" failed during recording. Server response : 401*/

	web_custom_request("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_custom_request("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t5.inf", 
		LAST);

	web_custom_request("device=TEST-000000000000001", 
		"URL=https://redirect1.sndbx.junipercloud.net/restconf/data/juniper-zerotouch-bootstrap-server:devices/device=TEST-000000000000001", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/yang.data+xml", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	return 0;
}