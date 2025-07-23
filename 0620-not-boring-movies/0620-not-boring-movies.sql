# Write your MySQL query statement belows
select id,movie,description,rating from Cinema where MOD(id,2)=1 and description != "boring" order by rating desc;