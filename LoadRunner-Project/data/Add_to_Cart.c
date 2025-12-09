Add_to_Cart()
{

	web_add_auto_header("Accept-Language", 
		"en-GB,en;q=0.9");

	lr_think_time(7);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_link("FI-SW-01", 
		"Text=FI-SW-01", 
		"Snapshot=t6.inf", 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t7.inf", 
		LAST);

	return 0;
}
