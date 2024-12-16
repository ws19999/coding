SELECT ROUND(SUM(CASE WHEN order_date = customer_pref_delivery_date THEN 1 ELSE 0 END) / COUNT(*)*100 , 2) immediate_percentage
FROM Delivery d
JOIN (SELECT customer_id, MIN(order_date) o
FROM Delivery GROUP BY customer_id) e WHERE(e.customer_id = d.customer_id and e.o = d.order_date)