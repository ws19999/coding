SELECT tb1.category category, COUNT(tb2.category) accounts_count
FROM (
    SELECT "Low Salary" AS category
UNION ALL
SELECT "Average Salary"
UNION ALL
SELECT "High Salary") tb1 LEFT JOIN (SELECT 
CASE WHEN income<20000 THEN "Low Salary"
WHEN income>=20000 and income<50000 THEN "Average Salary"
WHEN income>=50000 THEN "High Salary"
END AS category
FROM Accounts) tb2 ON(tb1.category = tb2.category)
GROUP BY tb1.category