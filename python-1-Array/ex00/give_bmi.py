def give_bmi(height: list[int | float], weight: list[int | float]) -> list[int | float]:
    if len(height) != len(weight):
        raise ValueError("height and weight list do not have same length")
    for h in height:
        if not isinstance(h, (int, float)):
            raise TypeError("All heights must be int or float")
        elif h <= 0:
            raise ValueError("Heights must be positive")
    for w in weight:
        if not isinstance(w, (int, float)):
            raise TypeError("All weights must be int or float")
        elif w <= 0:
            raise ValueError("Weights must be positive")
    return [w / (h * h) for w, h in zip(weight, height)]


def apply_limit(bmi: list[int | float], limit: int) -> list[bool]:
    if not isinstance(limit, int):
        raise TypeError("Limit must be an integer")
    return [b > limit for b in bmi]
