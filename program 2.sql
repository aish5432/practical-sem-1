use science;
show databases;
show tables;
create table employees(
 emp_id int,
 emp_name varchar(100),
 city varchar(50));
 select*from employees;
 alter table employees add department varchar(50);
 select*from employees;
 alter table employees rename column emp_name to full_name;
 select*from employees;
 truncate table employees;
 select*from employees;
 drop table employees;
 show tables;
 