Login()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("Account.action;jsessionid=FC6CD133C421D5DE801A7C8B423BA48F", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=FC6CD133C421D5DE801A7C8B423BA48F?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("Account.action", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=username", "Value=user1usthp", ENDITEM, 
		"Name=password", "Value=Pass@word123", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		LAST);

	return 0;
}
