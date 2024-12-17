SELECT ROUND(COUNT(tb.player_id)/COUNT(distinct a.player_id),2) fraction
FROM Activity a
LEFT JOIN
(SELECT player_id,min(event_date) ed
FROM Activity
GROUP BY player_id) tb ON (DATEDIFF(a.event_date,tb.ed)=1 and a.player_id=tb.player_id)