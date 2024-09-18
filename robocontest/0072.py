"""
Three points (x1,y1), (x2,y2), and (x3,y3) form a triangle if and only if they are not collinear. This can be checked using the determinant of a matrix formed by these points. Specifically, you can compute the area of the triangle using the following formula:
 ∣x1(y2−y3)+x2(y3−y1)+x3(y1−y2)∣

If the area is zero, then the points are collinear and thus do not form a triangle.

"""


from math import sqrt,floor

x1,y1 = map(int,input().split())
x2,y2 = map(int,input().split())
x3,y3 = map(int,input().split())

area = abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2))

if area!=0:
  print("uchburchak")
else:
  print("uchburchak emas")
