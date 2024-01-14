import java.util.Scanner;

public class AnnualIncomeCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of employees: ");
        int numEmployees = scanner.nextInt();

        for (int i = 1; i <= numEmployees; i++) {
            System.out.print("Enter the number of years of experience for Employee " + i + ": ");
            int yearsOfExperience = scanner.nextInt();

            if (yearsOfExperience > 0 && yearsOfExperience < 15) {
                System.out.print("Enter the shift allowance percentage for Employee " + i + ": ");
                double shiftAllowancePercentage = scanner.nextDouble();

                if (shiftAllowancePercentage > 0 && shiftAllowancePercentage < 20) {
                    double dayShiftSalary = 12000 + (2000 * yearsOfExperience);
                    double nightShiftSalary = dayShiftSalary * (1 + shiftAllowancePercentage / 100);
                    double annualIncome = (dayShiftSalary * 6 + nightShiftSalary * 6);

                    System.out.println("Annual income of Employee " + i + ": Rs." + annualIncome);
                } else {
                    System.out.println("<> is an invalid shift allowance percentage for Employee " + i);
                }
            } else {
                System.out.println("<> is an invalid years of experience for Employee " + i);
            }
        }

        scanner.close();
    }
}
