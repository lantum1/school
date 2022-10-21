Var
n,a,m,i:integer;
Begin
read(n);
m:=0;
for i:=1 to n do
begin
  read(a);
  if (a mod 10 = 5)  and (a>m) then m:=a;
end;
write(m);
End.