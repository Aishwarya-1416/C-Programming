import java.util.Scanner;

public class forloop4 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        double totalSales = 0;
        double totalCommissions = 0;

        double highestSales = 0;
        String topPerformer = "";

        for(int i = 0; i < n; i++) {

            String name = sc.next();
            double sales = sc.nextDouble();

            double rate = 0;
            double bonus = 0;

            if(sales <= 40000) {
                rate = 5;
            }
            else if(sales <= 80000) {
                rate = 8;
            }
            else if(sales <= 100000) {
                rate = 10;
            }
            else if(sales <= 150000) {
                rate = 12;
                bonus = 2000;
            }
            else {
                rate = 15;
                bonus = 3000;
            }

            double commission = sales * rate / 100;
            double totalPayout = commission + bonus;

            totalSales += sales;
            totalCommissions += commission;

            if(sales > highestSales) {
                highestSales = sales;
                topPerformer = name;
            }

            System.out.println("Sales Rep: " + name);
            System.out.println("Sales Amount: $" + sales);
            System.out.println("Commission Rate: " + (int)rate + "%");
            System.out.println("Commission Earned: $" + commission);
            System.out.println("Bonus: $" + bonus);
            System.out.println("Total Payout: $" + totalPayout);
        }

        System.out.println("Total Sales Reps: " + n);
        System.out.println("Total Sales: $" + totalSales);
        System.out.println("Total Commissions: $" + totalCommissions);
        System.out.println("Top Performer: " + topPerformer);
    }
}