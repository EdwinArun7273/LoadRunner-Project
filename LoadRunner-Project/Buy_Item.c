Buy_Item()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-1", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	return 0;
}
