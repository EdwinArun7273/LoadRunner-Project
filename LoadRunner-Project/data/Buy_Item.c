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

	web_submit_form("Order.action_2", 
		"Snapshot=t9.inf", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=user1fn", ENDITEM, 
		"Name=order.billToLastName", "Value=user2ln", ENDITEM, 
		"Name=order.billAddress1", "Value=xyz", ENDITEM, 
		"Name=order.billAddress2", "Value=abc", ENDITEM, 
		"Name=order.billCity", "Value=def", ENDITEM, 
		"Name=order.billState", "Value=ghi", ENDITEM, 
		"Name=order.billZip", "Value=123", ENDITEM, 
		"Name=order.billCountry", "Value=jkl", ENDITEM, 
		"Name=shippingAddressRequired", "Value=<OFF>", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		LAST);

	web_link("Confirm", 
		"Text=Confirm", 
		"Snapshot=t10.inf", 
		LAST);

	return 0;
}
