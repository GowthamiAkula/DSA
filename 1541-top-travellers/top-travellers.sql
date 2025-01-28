/* Write your PL/SQL query statement below */
SELECT u.name,SUM(case 
                    when s.distance is not null then s.distance else 0 
                    end) as travelled_distance
FROM
Users u
LEFT JOIN
Rides s
ON
u.id = s.user_id
GROUP BY s.user_id,u.name
ORDER BY travelled_distance DESC,u.name ASC;