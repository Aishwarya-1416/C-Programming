import java.util.Scanner;

public class forloop5 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        double totalRate = 0;
        double highestRate = 0;
        int peakDay = 0;
        int fullDays = 0;

        for(int i = 0; i < n; i++) {

            int day = sc.nextInt();
            int occupied = sc.nextInt();
            int total = sc.nextInt();

            double rate = ((double)occupied / total) * 100;

            String status;

            if(rate < 60) {
                status = "Low";
            }
            else if(rate < 80) {
                status = "Moderate";
            }
            else if(rate < 100) {
                status = "High";
            }
            else {
                status = "Full";
                fullDays++;
            }

            totalRate += rate;

            if(rate > highestRate) {
                highestRate = rate;
                peakDay = day;
            }

            System.out.println("Day: " + day);
            System.out.println("Rooms Occupied: " + occupied);
            System.out.println("Total Rooms: " + total);
            System.out.println("Occupancy Rate: " + rate + "%");
            System.out.println("Status: " + status);
            System.out.println();
        }

        double avg = totalRate / n;

        System.out.println("Total Days Analyzed: " + n);
        System.out.println("Average Occupancy Rate: " + avg + "%");
        System.out.println("Peak Occupancy Day: Day " + peakDay);
        System.out.println("Days at Full Capacity: " + fullDays);
    }
}