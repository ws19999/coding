(SELECT name results
FROM(SELECT user_id
FROM MovieRating
GROUP BY user_id
HAVING COUNT(*) = (SELECT MAX(c)
FROM (SELECT user_id,count(*) as c
FROM MovieRating GROUP BY user_id) a) )tb LEFT JOIN Users using(user_id)
ORDER BY name
LIMIT 1)

UNION ALL

(SELECT title
FROM Movies LEFT JOIN MovieRating using (movie_id)
WHERE YEAR(created_at) = 2020 and MONTH(created_at) = 2
GROUP BY movie_id
ORDER BY AVG(rating) DESC, title
LIMIT 1)