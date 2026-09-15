# LeetCode Solutions

My LeetCode journey, synced automatically from LeetCode to this repo.

![Auto-synced](https://img.shields.io/badge/sync-automated-6f42c1)
![Workflow](https://img.shields.io/badge/GitHub%20Actions-enabled-2088FF?logo=githubactions&logoColor=white)
![LeetCode](https://img.shields.io/badge/LeetCode-profile-FFA116?logo=leetcode&logoColor=white)

---

## About

Every accepted submission I write on LeetCode gets pulled into this repository by a GitHub Action. No copy-pasting, no manual commits. The goal is a durable, searchable archive of how my problem-solving has evolved over time.

The sync is powered by [`joshcai/leetcode-sync`](https://github.com/joshcai/leetcode-sync), which reads my accepted submissions and writes them here as individual files.

---

## Progress

| Difficulty | Solved |
| :--- | :--- |
| Easy | 1 |
| Medium | 0 |
| Hard | 0 |
| **Total** | **1** |

---

## Solutions

| # | Problem | Difficulty | Topics | Solution |
| :--- | :--- | :--- | :--- | :--- |
| 485 | [Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/) | Easy | Array | [View](completed_solutions/0485-max-consecutive-ones) |

---

## Repository structure

```
.
├── .github/
│   └── workflows/
│       └── sync_leet.yml      # the sync workflow
├── my-folder/                 # all synced solutions live here
│   └── 0485-max-consecutive-ones/
│       ├── README.md          # problem description
│       └── solution.*         # my accepted code
└── README.md                  # you are here
```

Each problem gets its own folder named `<zero-padded-id>-<problem-slug>`, so everything sorts numerically and is easy to find.

---

## Why I keep this

- **Spaced repetition.** Re-reading old solutions is faster than re-solving from scratch.
- **Pattern recognition.** Seeing my solutions grouped by topic makes the recurring techniques obvious.
- **Interview prep.** A single place to review before a screen, instead of scrolling LeetCode's submission history.

---

<sub>Solutions are my own work. Problem statements and test cases belong to LeetCode.</sub>
