using System.Collections;
using System.Collections.Generic;
using EZDoor.Rotating;
using UnityEngine;

public class DoorController : MonoBehaviour
{
    [Range(1f, 10f)]
    [SerializeField] float distanceToOpen = 5f;
    [SerializeField] GameObject player;
}
