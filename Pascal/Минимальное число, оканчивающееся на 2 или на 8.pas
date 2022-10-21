Var
n,a,m,i:integer;
Begin
read(n);
m:=30001;
for i:=1 to n do
begin
  read(a);
  if ((a mod 10 = 8) or (a mod 10=2)) and (a<m) then m:=a;
end;
write (m);
End.