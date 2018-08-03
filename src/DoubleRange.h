#pragma once

class DoubleRange
{
public:

	DoubleRange(double min, double max);

	bool IsInside(double x);
	bool IsInside(DoubleRange *range);
	bool IsOverlapping(DoubleRange *range);

	double Min() const { return min; }
	void Min(const double min) { this->min = max; }

	double Max() const { return max; }
	void Max(const double max) { this->max = max; }

	double Length() const { return max - min; }

private:
	
	double min, max;
};

