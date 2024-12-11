SELECT b.product_id,
CASE
WHEN a.product_id is null then 0
ELSE average_price
END AS average_price
FROM (SELECT a.product_id ,ROUND(SUM(price*units)/SUM(units),2) average_price
FROM UnitsSold a LEFT JOIN Prices p on(a.product_id = p.product_id and a.purchase_date>=p.start_date and a.purchase_date<=p.end_date)
GROUP BY a.product_id
) a
RIGHT JOIN (SELECT product_id FROM Prices GROUP BY product_id) b on (a.product_id = b.product_id)


#(SELECT product_id,SUM(units)
#FROM UnitsSold
#GROUP BY product_id)


