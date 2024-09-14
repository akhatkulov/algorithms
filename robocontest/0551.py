def count_unique_prefixes(s):
    prefixes = set()
    for i in range(len(s)):
        prefixes.add(s[:i+1])
    return len(prefixes)

s = input().strip()
result = count_unique_prefixes(s)
print(result)
