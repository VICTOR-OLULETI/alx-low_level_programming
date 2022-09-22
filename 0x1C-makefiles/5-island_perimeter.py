#!/usr/bin/python3
"""This program computes the perimeter of a list of list"""

def island_perimeter(grid):
    """This function calculates the island perimeter"""
    if grid == []:
        return (0)
    per = 0
    try:
        row = len(grid[0])
    except:
        return (0)

    if (type(grid[0]) is not list):
        return (0)
    col = len(grid)
    for rows in grid:
        for columns in rows:
            if (columns == 1):
                per += 1

    if (per):
        per += 1
    return (2 * per)
