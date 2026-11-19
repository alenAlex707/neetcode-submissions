class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        # Check rows
        for row in board:
            seen = set()
            for digit in row:
                if digit == ".":
                    continue
                if digit in seen:
                    return False
                seen.add(digit)

        # Check columns
        for col in range(9):
            seen = set()
            for row in range(9):
                digit = board[row][col]
                if digit == ".":
                    continue
                if digit in seen:
                    return False
                seen.add(digit)

        # Check each 3x3 box
        for box_row in range(3):
            for box_col in range(3):
                seen = set()
                for row in range(box_row * 3, box_row * 3 + 3):
                    for col in range(box_col * 3, box_col * 3 + 3):
                        digit = board[row][col]
                        if digit == ".":
                            continue
                        if digit in seen:
                            return False
                        seen.add(digit)

        return True