Var
n,a,m,i:integer;
Begin
read(n);
m:=0;
for i:=1 to n do
begin
  read(a);
  if (a mod 7 = 0) and (a mod 10 = 5) then m:=m+a;
end;
write(m);
End.