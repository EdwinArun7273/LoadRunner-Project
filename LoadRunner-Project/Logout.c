Logout()
{

	web_add_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("Account.action_2", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}