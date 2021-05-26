SELECT * FROM `12008137`.sp;
SELECT * FROM `12008137`.emp;


## P table

	create table p(
	pno char(3),
	pname varchar(10),
	color varchar (15),
	weight varchar(55),
	p_city varchar(25),
	primary key(pno));
    
select * from p;

insert into p values ('p1','nut','red','12','london');
insert into p values ('p2','bolt','green','20','paris');
insert into p values ('p3','screw','blue','17','oslo');
insert into p values ('p4','c.g','red','19','london');
insert into p values ('p5','cam','blue','12','paris');

DROP TABLE S;

## s table  
create table s(
sno char(3) primary key,
sname varchar(20) not null,
status varchar(30) not null,
city char(25)
);

select * from s;
insert into s values('s1','smith',20,'london');
insert into s values('s2','jones',10,'paris');
insert into s values('s3','black',30,'london');
insert into s values('s4','clark',20,'paris');
insert into s values('s5','adams',30,'athens');

## sp table 

create table sp(
sno char(3) not null,
pno char(3) not null,
qty int(3) not null,
primary key(sno,pno),
foreign key(sno) references s(sno),
foreign key(pno) references p(pno)
);

select * from sp;
insert into sp values('s1','p1',300);
insert into sp values('s2','p2',100);
insert into sp values('s3','p3',200);
insert into sp values('s4','p4',2000);
insert into sp values('s5','p5',100);
insert into sp values('s1','p3',200);
insert into sp values('s3','p2',300);
insert into sp values('s5','p3',100);




## a1-
 SELECT pname from P where p_city = "London";

 a2-

SELECT pname from p where weight = (SELECT max(weight) from p);
a3
SELECT pname,pno from p where color = "Red";
a4-
 SELECT s.sname,s.city from s, sp where s.sno = sp.sno and sp.qty > 200;
 a-5
 SELECT max(weight) from p where weight < (SELECT max(weight) from p);
 a6-
 select sp.sno, sp.qty from sp, p where sp.pno = p.pno and p.weight = (select max(weight) from p) ;
a7-
Select s.sname, sp.qty from sp,p,s where p.color="Red" and sp.pno = p.pno and sp.sno= s.sno;
a8-
 select s.sname,p.p_city,sp.qty from sp,p,s where sp.pno=p.pno and sp.sno=s.sno and s.status<30;
 A.9.
 select s.sname, sum(sp.qty) from sp,s where sp.sno = s.sno group by sp.sno;
 a10
select  p.pname, sum(sp.qty) from sp,p where sp.pno = p.pno group by p.pno;
a11
 select p.pname, sum(sp.qty) from sp,p where sp.pno = p.pno group by p.pname;
A.12.
 select s.sname, s.sno, sum(sp.qty) from sp,s where sp.sno = s.sno group by sp.sno having sp.sno <"s4"; 
 a13-
 select s.sname, s.sno, sum(sp.qty) from sp,s where sp.sno = s.sno and s.status = 20 group by sp.sno ;

 
 
 
## Emp table
 
 create table Emp(
 Emp_id int  primary key,
 Emp_name varchar(35) not null , 
 Emp_dept_id int not null,
 Emp_boss_id int not null ,
 Emp_salary long not null , 
 Foreign key(Emp_dept_id) REFERENCES Dept(Dept_id));

select * from Emp;


insert into Emp values(1,"radhika",101,1,5100);
insert into Emp values(2,"priya",101,1,5000);
insert into Emp values(3,"Riya",101,2,5100);
insert into Emp values(4,"jay",102,3,5000);
insert into Emp values(5,"ram",102,2,5200);
insert into Emp values(6,"radhika",102,4,5500);
insert into Emp values(7,"komal",103,5,5300);
insert into Emp values(8,"bhoomi",103,7,4900);
insert into Emp values(9,"sarika",103,8,3500);
insert into Emp values(10,"avni",104,9,4000);
insert into Emp values(11,"pallavi",104,10,5400);
insert into Emp values(12,"urvisha",104,11,12000);

 ## Dept Table
 create table Dept(
 Dept_id int primary key ,
 Dept_name varchar(30) not null,
 Dept_location varchar(50) not null );

insert into Dept values(101,"computer science","london");
insert into Dept values(102,"it ","mahua");
insert into Dept values(103,"PGDCA","ahmedabad");
insert into Dept values(104,"accounting","pune");
insert into Dept values(105,"arts","junagadh");


##--query1
select emp.Emp_name,dept.Dept_name,boss.Emp_name as BossName ,bdept.Dept_name as BossDeptName
from emp, emp as boss , dept, dept as bdept where emp.Emp_boss_id = boss.Emp_id 
and emp.Emp_dept_id = dept.Dept_id
and boss.Emp_dept_id = bdept.Dept_id;

##query2
select emp.Emp_name,dept.Dept_name,boss.Emp_name as 'boss name',emp.emp_salary, boss.emp_salary as BossSalary ,bdept.Dept_name as BossDeptName 
from emp, emp as boss , dept, dept as bdept where emp.Emp_boss_id = boss.Emp_id 
and emp.Emp_dept_id = dept.Dept_id
and boss.Emp_dept_id = bdept.Dept_id
and emp.emp_salary > boss.emp_salary;

                
##Query 3
 (select max(Emp_salary) as Salary,Dept_name as DeptName from emp,dept where emp.Emp_dept_id= dept.Dept_id
group by Dept_id); 

##Query4
select count(emp_id) as Employess,Dept_name as DeptName from emp,dept where emp.Emp_dept_id= dept.Dept_id
group by Dept_id;


##account table

create table acount
(acc_no int,
amount decimal(10,2));


insert into acount values(111,4000);
insert into acount values(112,3000);
insert into acount values(113,40000);

select * from acount;

drop trigger acc_sum;


# Trigger sum  Query 9

CREATE TRIGGER acc_sum 
after INSERT ON acount

FOR EACH ROW SET @sum = @sum + NEW.amount;
set @sum=0;
select @sum as 'total';
select * from acount;


## Trigger Credit debit query 7

CREATE TRIGGER acc_transaction 
after INSERT ON acount
FOR EACH ROW 
SET
@deposits = @deposits + IF(NEW.amount>0,NEW.amount,0),
@withdrawals = @withdrawals + IF(NEW.amount<0,-NEW.amount,0);

SET @sum = 0;
SET @deposits = 0;
SET @withdrawals=0;

select @sum;

drop trigger acc_transaction;
 INSERT INTO acount
VALUES (1001,100.00),
(1002,2000.00),
(1003,-400.00);
SELECT @deposits as 'Total Deposited', @withdrawals as 'Total Withdrawaled', @sum AS 'Total amount inserted';
  
insert into acount(acc_no,amount)values(1,-400);


## DeadLock     q=8;
    show full processlist;
lock tables s write;
lock tables p write;
unlock tables;
