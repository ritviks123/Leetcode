class Solution:
    def isValid(self, s: str) -> bool:
        seen = []

        for char in s:
            if char == '(':
                seen.append(')')
            elif char == '[':
                seen.append(']')
            elif char == '{':
                seen.append('}')
            elif not seen or seen.pop() != char:
                return False

        return not seen