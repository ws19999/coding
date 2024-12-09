SELECT user_id,
CASE
WHEN (al=0) THEN 0.00
ELSE ROUND(confirm/al,2) END AS confirmation_rate
FROM(SELECT user_id, (SELECT COUNT(*) FROM Confirmations b WHERE a.user_id = b.user_id) al,(SELECT COUNT(*) FROM Confirmations b WHERE a.user_id = b.user_id and b.action='confirmed') confirm 
FROM Signups a) tb