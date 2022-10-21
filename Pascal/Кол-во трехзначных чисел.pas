Var
n,a,m,b,k,i:integer;
Begin
read(n);
m:=0;
for i:=1 to n do
begin
  read(a);
  b:=a;
  while a <> 0 do
  begin
    b:=a mod 10;
    a:=a div 10;
    k:=k+1;
  end;
  if (k=3) then m:=m+1;
  k:=0
end;
write(m);
End.