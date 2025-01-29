# Write your MySQL query statement below
WITH temptb as (SELECT MIN(id) id, email FROM Person GROUP BY email)
DELETE FROM Person
WHERE (id, email) NOT in (SELECT * FROM temptb)