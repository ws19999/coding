SELECT id,sum(num) as num
FROM(SELECT requester_id as id, count(accept_date) as num
FROM RequestAccepted 
GROUP BY 1

UNION ALL

SELECT accepter_id, count(accept_date)
FROM RequestAccepted
GROUP BY 1) a
GROUP BY id
ORDER BY num DESC
LIMIT 1
