SELECT c.visited_on , SUM(amount) amount, ROUND(SUM(amount)/7,2) average_amount
FROM (SELECT DISTINCT visited_on as visited_on
FROM Customer) c 
LEFT JOIN Customer d ON(DATEDIFF(c.visited_on,d.visited_on)<=6 and DATEDIFF(c.visited_on,d.visited_on)>=0)
GROUP BY c.visited_on
HAVING MAX(DATEDIFF(c.visited_on,d.visited_on))=6
ORDER BY 1
