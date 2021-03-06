# Circular Barn

Being a fan of contemporary architecture, Farmer John has built a new barn in the shape of a perfect circle. Inside, the barn consists of a ring of n rooms, numbered clockwise from 1…n around the perimeter of the barn (3≤n≤1000). Each room has doors to its two neighboring rooms, and also a door opening to the exterior of the barn.
Farmer John owns n cows, and he wants exactly one cow to end up in each room in the barn. However, the cows, being slightly confused, line up at haphazard doors, with possibly multiple cows lining up at the same door. Precisely ci cows line up outside the door to room i, so ∑ci=n.

To manage the process of herding the cows so that one cow ends up in each room, Farmer John wants to use the following approach: each cow enters at the door at which she initially lined up, then walks clockwise through the rooms until she reaches a suitable destination. Given that a cow walking through d doors consumes d2 energy, please determine the minimum amount of energy needed to distribute the cows so one ends up in each room.

## Input

The first line of input contains n. Each of the remaining n lines contain c1…cn.

## Output

Please write out the minimum amount of energy consumed by the cows.

## Sample Input

```
10
1
0
0
2
0
0
1
2
2
2
```

## Sample Output

```
33
```
