using UnityEngine;
public class PlayerMovement : MonoBehaviour
{
    [SerializeField] private float playerSpeed;
    [SerializeField] private Transform target;
    private Rigidbody playerRb;
    private Vector3 newPos;
    private Camera mainCamera;
    
    private void Start()
    {
        PlayerPrefs.SetString("Lose","No");
        playerRb = GetComponent<Rigidbody>();
        mainCamera = Camera.main;
    }

    private void FixedUpdate()
    {
        if(Input.GetMouseButton(0) || Input.touchCount > 0)
            followTouch();
    }
    
    private void followTouch()
    {
#if UNITY_EDITOR
        Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
#else
        if (Input.touchCount == 0)
            return;
        Ray ray = mainCamera.ScreenPointToRay(Input.GetTouch(0).position);
#endif
        newPos = ray.origin + ray.direction/2f;
        Vector3 dir = new Vector3(newPos.x - transform.position.x, transform.position.y, transform.position.z);
        playerRb.MovePosition(transform.position + (dir * playerSpeed * Time.deltaTime));
        Vector3 targ = new Vector3(target.position.x, target.position.y, target.position.z - 15f);
        transform.LookAt(targ);
    }
}