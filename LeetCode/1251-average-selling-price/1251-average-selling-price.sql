SELECT p.product_id,
CASE 
WHEN SUM(units)=0 OR SUM(units) IS NULL THEN 0
ELSE ROUND(SUM(units*price)/SUM(units),2) 
END as average_price
FROM Prices p LEFT JOIN UnitsSold u on (p.product_id = u.product_id and (u.purchase_date BETWEEN start_date AND end_date))
GROUP BY p.product_id