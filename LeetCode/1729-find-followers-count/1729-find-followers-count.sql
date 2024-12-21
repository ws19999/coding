SELECT user_id, count(follower_id) followers_count
FROM Followers
GROUP BY user_id
ORDER BY 1