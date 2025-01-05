SELECT product_id, CASE WHEN new_price IS NULL THEN 10 ELSE new_price END AS price
FROM(SELECT *
FROM (SELECT DISTINCT product_id product_id
FROM Products) tb1 LEFT JOIN (SELECT product_id, MAX(change_date) change_date FROM Products WHERE change_date<=20190816 GROUP BY product_id ) tb2 USING(product_id)) tb3 LEFT JOIN Products tb4 USING(product_id,change_date)