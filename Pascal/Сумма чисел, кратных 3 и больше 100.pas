Var
n,a,m,i:integer;
Begin
read(n);
m:=0;
for i:=1 to n do
begin
  read(a);
  if (a mod 3 = 0) and (a > 100) then m:=m+a;
end;
write(m);
End.