SELECT user_id,CONCAT(UPPER(LEFT(name, 1)),LOWER(SUBSTRING(name, 2))) name
FROM Users
order by user_id