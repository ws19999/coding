SELECT activity_date day, count(distinct user_id) active_users
FROM Activity
GROUP BY activity_date
HAVING DATEDIFF("2019-07-27",activity_date)<30 and DATEDIFF("2019-07-27",activity_date)>=0
ORDER BY 1