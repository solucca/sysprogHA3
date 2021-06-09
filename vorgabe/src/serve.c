#include "serve.h"
#include "kitchen.h"
/**
 * @param customer that needs attention based on status:
 *          ARRIVED -> check for empty table and seat customer, return 0
 *          DECIDED -> return 0
 *          EATEN   ->  calculate price and tip (if any). Save them for customer and add to restaurant. Free the table. return 0.
 * @param res
 * @return -1 if not successful
 */


int serveCustomer(customerParty *customer, restaurant *res) {
    int stage = customer->currentStage;

    if (stage == ARRIVED) {
        /* ------------ hier code einfügen ------------ */




        
        /* ---------- bis hier code einfügen ---------- */
    } //SEAT
    if (stage == DECIDED) {
        return 0;
    } //ORDER
    if (stage == EATEN) {
        /* ------------ hier code einfügen ------------ */




        
        /* ---------- bis hier code einfügen ---------- */
    } //PAY
    return -1;
}
