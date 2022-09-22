#!/usr/bin/python3
"""This program computes the perimeter of a list of list"""


def island_perimeter(grid):
    """This function calculates the island perimeter"""
    if grid == []:
        return (0)
    per = 0
    try:
        col = len(grid[0])
    except IndexError:
        return (0)

    if (type(grid[0]) is not list):
        return (0)
    row = len(grid)
    for i in range(row):
        for j in range(col):
            if (grid[i][j] == 1):
                if i == 0:
                    per += 1
                if j == 0:
                    per += 1
                if j == col - 1:
                    per += 1
                if i == row - 1:
                    per += 1
                if ((j+1) < col and grid[i][j+1] == 0):
                    per += 1
                if ((j-1) >= 0 and grid[i][j-1] == 0):
                    per += 1
                if ((i-1) >= 0 and grid[i-1][j] == 0):
                    per += 1
                if ((i+1) < row and grid[i+1][j] == 0):
                    per += 1
    return (per)
